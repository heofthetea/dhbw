> Version/Alternative Management for [[Executable|Binaries]]


## Example: Python
[from here](https://unix.stackexchange.com/posts/410851/timeline)

From the comment:

```python
sudo update-alternatives --config python
```

Will show you an error:

```python
update-alternatives: error: no alternatives for python3 
```

You need to update your `update-alternatives` , then you will be able to set your default python version.

```python
sudo update-alternatives --install /usr/bin/python python /usr/bin/python3.4 1
sudo update-alternatives --install /usr/bin/python python /usr/bin/python3.6 2
```

Then run :

```python
sudo update-alternatives --config python
```

Set python3.6 as default.

Or use the following command to set python3.6 as default:

```python
sudo update-alternatives  --set python /usr/bin/python3.6
```
