> [!info] Tar files can have an extra extension such as `.tar.gz`. This appendix indicates, which compression algorithm has been used. 

```shell
tar -xvzf filename.tar.gz -C /path/to/directory
```

Here is a brief explanation of the options used:
- `-x`: This option tells tar to extract the contents of the archive.
- `-v`: This option is for verbose output, which means that tar will display a list of the files being extracted as it does so.
- `-z`: This option tells tar to decompress the archive using gzip.
- `-f`: This option is used to specify the archive file to extract.
- `-C`: Tells tar to where to extract the files to.

### List of compression suffixes
- `.tar.gz`: gzip