			ORG 0000H
			MOV A,#0FFH
			MOV P1,A
			MOV B,#10
			DIV AB
			MOV R1,B
			MOV B,#10
			DIV AB
			MOV R2,B
			MOV R3,A
			END
			