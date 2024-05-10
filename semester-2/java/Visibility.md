> What part of an [[Object]] is known to other [[Object/Objects]]

- serves to _uncouple_ different functionalities

| name              | UML symbol | who can access        |
| ----------------- | ---------- | --------------------- |
| private           | `-`        | class, -, -           |
| protected         | `#`        | class, child, -       |
| public            | `+`        | class, child, package |
| package (default) | `~`        | class, -, package     |
