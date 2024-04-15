_high level_ file access

## Syntax

#### open file
`fopen(file_path: str, mode: str)`
returns 0 when file not found
modes:

|  |  |
| ---- | ---- |
| r | read |
| w | write |

#### I/O
Binary: writes stuff as represented in _memory_ --> enables writing of entire dataset as a row

|  | formatting | characterwise | stringwise | binary |  | postitioning | error handling |
| ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| output | `fprintf()` | `fputc()` | `fputs()` | `fwrite()` |  | `fseek()` | `ferror()` |
| input | `fscanf()` | `fgetc()` | `fgets()` | `fread()` |  | `ftell()` | `feof()` (end-of-file) |

`fgets(to: str, max_characters: int, file: FILE)`
-> reads until end of line (carriage-return)
when line _longer_ than max_characters: Goes into next line _anyway_



delete buffer: `fflush()`
close file: `fclose()`

## Use case
[[file_handling.c]]

data type: `FILE`
--> this is _"Gesamtverwaltung"_ of file
is a structure: can use . syntax
### Reading
```c
int main()
{
	FILE *file;
	file = fopen("file.txt", "r");
	char text[81];

	if(!file)
		printf("Scheise, isch konnt' die Dadei ned öffne");

	fgets(text, 80, file); // Vorlesen

	while(!feof(file)) {
		printf("%s", text); // processing
		fgets(text, 80, file); // Nachlesen
	}
	fclose(file);
}
```

This can also be done using a _do while_ loop:
```c
do {
	fgets(text, 80, file);
	printf("%s", text);
} while (!feof(file));
```

> **ATTENTION!!!** To work properly, the opened file _has_ to end with an empty line!!