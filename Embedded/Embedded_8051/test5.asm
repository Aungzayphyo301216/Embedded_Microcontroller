		ORG 0000H
7		SETB C
		ORL C,P2.2
		MOV P2.2,C
		CLR C
		ANL C,P2.5
		MOV P2.5,C
		END