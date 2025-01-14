```od test.txt --format=x1``` 	[mostra il contenuto del file in esadecimale]

```cat test.txt``` 			[mostra il contenuto del file]

```gcc test.c -Wall``` 		[mostra tutti i warning]

```gcc test.c -o nomeprogramma``` 	[da un nome all'eseguibile]

```gcc test.c -std=C18```		[usa una versione specifica]

```gcc test.c -c```			[produce il file oggetto invece dell'eseguibile]

```gcc test.c -E	```		[mostra l'output di preprocessing]

```gcc test.c -lm```                  [flag -lm si usa quando si usa un header di matemtica es. <math.h>]

```gcc test.c -Wconversion```         [segnala possibili problemi con le conversioni]

```man 3 printf```                    [apre il manuale per sviluppatori (3) della funzione printf]

```./a.out 1>out.txt```               [stampa lo stream stdout (1) su un file out.txt. stdin ha codice 0]

```./a.out 2>err.txt```               [stampa lo stream stderr (2) su un file err.txt]

```./a.out 2>err.txt 1>&2```          [come sopra, ma stampa lo stream 1 (stdout) come lo stream 2 (stderr), quindi nello stesso file]

### ESEGUI compile.sh
```
chmod +x complie.sh
./compile.sh
./nome_eseguibile
```