# SO-Projekt1-PK
The first projekt from subject "Systemy Operacyjne" from Information Technologies studie

PROJEKT NR1 - PROCESY
Projekt nr1 składa się z 3 plików.


Napisać program wypisujący identyfikatory PID, PPID, UID, GID dla danego procesu (program1_1).

Wywołać funkcję fork() 3 razy np. w pętli i wypisać powyższe identyfikatory dla wszystkich procesów potomnych. Na podstawie wyników narysować „drzewo genealogiczne” tworzonych
procesów. Ile powstaje procesów i dlaczego (program1_2). 

Zmodyfikować poprzedni program tak, aby komunikaty procesów potomnych były wypisywane przez program uruchamiany przez funkcję exec(). W procesie macierzystym zaimplementuj
funkcję wait() (proces macierzysty czeka na zakończenie wszystkich procesów potomnych, wypisuje komunikat, który proces potomny się zakończył i z jakim statusem). Ile teraz powstaje
procesów i dlaczego? Dla wszystkich funkcji systemowych (fork(), execl(), wait()) zaimplementuj obsługę błędów używając funkcji bibliotecznej perror() (program1_3).
