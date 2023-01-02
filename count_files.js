const fs = require('fs');
const { exec } = require('child_process');

// Assume the current working directory is the root of the repository
const rootDir = process.cwd();

// Initialize a dictionary to store the file counts for each folder
const folderCounts = {};

// Walk through all the files and directories in the root directory
fs.readdir(rootDir, (err, items) => {
    for (const item of items) {
        // Skip the root directory itself and directories that start with a dot
        if (item === '.' || item.startsWith('.')) continue;

        // Get the full path of the item
        const itemPath = `${rootDir}/${item}`;

        // Check if the item is a directory
        fs.stat(itemPath, (err, stat) => {
            if (stat.isDirectory()) {
                // Count the number of files in the directory
                fs.readdir(itemPath, (err, files) => {
                    folderCounts[item] = files.length;
                });
            }
        });
    }

    // Open the readme file for editing
    fs.writeFile('README.md', '', (err) => {
        if (err) throw err;

        // Write the file counts to the readme file
        fs.appendFile('README.md', '# File counts\n\n', (err) => {
            if (err) throw err;
            for (const folder in folderCounts) {
                fs.appendFile('README.md',
                    `- 📂 ${folder}: ${folderCounts[folder]} files\n`, (err) => {
                    if (err) throw err;
                });
            }
        });

        // Commit and push the changes to the repository
        exec('git add README.md && git commit -m "Update file counts in README" && git push', (err, stdout, stderr) => {
            if (err) {
                console.error(err);
                return;
            }
            console.log(stdout);
        });
    });
});
