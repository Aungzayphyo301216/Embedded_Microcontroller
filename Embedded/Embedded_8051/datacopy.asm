		ORG 0
		MOV DPTR,#MYDATA
		MOV R1,#80H
B1:		CLR A
		MOVC A,@A+DPTR
		MOV @R1,A 
		MOV P0,A
		JZ EXIT
		INC DPTR
		INC R1
		SJMP B1
EXIT:		SJMP $
		
		ORG 300H
MYDATA: DB "The Promise of World Peace"
		END