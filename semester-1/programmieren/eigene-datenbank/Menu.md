```c
int main()
{
	int choice = -0xfffff

	// when auswahl == 0: terminates
	while(auswahl) {
		render_menu();
		scanf("%d", &choice);
		fflush(stdin);

		switch(choice)
		{
			case 1: read_file(f); break;
			case 2: manual_entry(f); break;
			case 3: delete_os(); // here no break is needed
			case 4: install spyware(); break;
			case 5: worst_case(); break;

			default: printf("\nnot a valid option");
		}
	}
}
```

```c
void manual_entry(input_student *in)
{
	printf("enter %d name: ", i + 1);
	scanf("%s", in->name);
	fflush(stdin);

	printf("enter %d age: ", i + 1);
	scanf("%d", &in->age);
	fflush(stdin);

	list_add(in); // pass input struct
}
``` 

```c
void worst_case() 
{
	install_windows();
}
```

```c
void render_menu() 
{
// print all options lol
}
```