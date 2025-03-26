> Running Instance of an [[Docker Image|Image]]

- when a Container is run, a new [[Filesystem]] (this time it's writable) is [[Union Mount|union mounted]] onto the image
- all changes made to the container at runtime will be made to this filesystem - once the container is destroyed, this data is lost -> [[Docker Volumes]] 

