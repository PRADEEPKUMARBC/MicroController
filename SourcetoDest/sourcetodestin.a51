ORG 0000H
SJMP 0030H

ORG 0030H

MOV DPH, #20H     ; High byte of external memory address

MOV R0, #00H      ; Source lower byte = 00H
MOV R1, #50H      ; Destination lower byte = 50H
MOV R2, #0AH      ; Count = 10 bytes

BACK:
    MOV DPL, R0   ; DPTR = 2000H + R0
    MOVX A, @DPTR ; Read from source

    MOV DPL, R1   ; DPTR = 2050H + R1
    MOVX @DPTR, A ; Write to destination

    INC R0
    INC R1

    DJNZ R2, BACK

HERE:
    SJMP HERE

END