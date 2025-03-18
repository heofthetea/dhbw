Super-global variable `_FILES`

![[Pasted image 20250318131001.png]]

> [!warning] Move the file once it has been uploaded
> ```php
>move_uploaded_file($_FILES['upfile']['tmp_name'], "some-path/$some-name)
>```

