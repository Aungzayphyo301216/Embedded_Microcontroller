			ORG 0000H
			MOV A,#04H
			MOV R3,#07H
			ANL A,0FH
			ANL R1,#0FH
			SWAP A
			ORL A,R1
			EN