	ORG 0000H
	CLR A
	MOV R1,#60H
	MOV R7,#16H
	AGAIN: MOV @R1,A
	INC R1
	DJNZ R7,AGAIN
	END
		