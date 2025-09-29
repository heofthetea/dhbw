[[AppImage]]
An AppImage is really just an entire compressed [[Root Directory|Filesystem]]. Because everything is lol.

```bash
/path/to/application.AppImage --appimage-help
```

if the option `--appimage-extract` shows up: Here ja go, you can extract stuff

```bash
/path/to/application.AppImage --appimage-extract
```

The extracted files will be placed in a folder called `squashfs-root`. There is no way to specify an alternative output directory, which sucks ass.