

- Also configure hwo an application appears in a menu with an icon

## App installation
Suppose you have an application installed vial a `.tar.gz` file.
> Typically, this application folder should go to `~/.local/share`. Alternatively, if the program is supposed to be shared by other users, use `/usr/local/share`.

Once the application resides there, it should not move, since the following steps include [[Symlink|symlinking]] files.


## Placing Resources in right locations
### 1. Place Executable on [[$PATH]]
it's always nice to have the app accessible from a terminal. Also, this makes the content of the [[Desktop file]] easier. 
> The standard directory for this would be `/usr/bin`.

> [!info] Usually, executables in here are [[Symlink|symlinked]] to their original locations. This makes it easier to track, whenever something changes.

### 2. Place icon somewhere
The icon needs to be _copied_, not _symlinked_ to the location. Otherwise, the image won't load correctly.

> Typical location would be `/usr/share/icons`.

### 3. Symlink [[Desktop file]] 
 Desktop files are pretty much _always_ symlinked.
 These _have_ to be located in `/usr/share/applications`, otherwise it will not be picked up by the desktop environment.