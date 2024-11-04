Wird von [[Layer 1]] als [[Header]] angehängt
- Liefert Informationen notwendig für [[Taktrückgewinnung]] und andere Meta-Informationen

1. 7-byte Folge aus abwechselnden Nullen und Einsen --> `10101010`
	1. Das letzte Byte ("Start Frame Delimeter" SFD) --> `10101011`
		1. Das letzte Bit ist geflippt --> Danach kommt [[MAC Adresse]]
