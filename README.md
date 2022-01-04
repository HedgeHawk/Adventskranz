# Adventskranz 🕯️🕯️🕯️🕯️

Dieses Repository zeigt eine Formel, um für ein beliebiges Datum die Anzahl brennender Kerzen auf einem Adventskranz zu berechnen.

## Das Adventskranz-Problem
Ein Adventskranz hat 4 Kerzen, die in der Adventszeit zwischen den 4 Adventssonntagen vor Heiligabend (24.12.) nach und nach an den Sonntagen angezündet werden. Es kann daher jedem Datum eine Anzahl Kerzen zugeordnet werden. Hierbei muss berücksichtigt werden, dass die Adventssonntage jedes Jahr an anderen Daten liegen. 
Beispiel für 2021:

| Datum      | Kerzen |
|------------|--------|
| 28.11.2021 | 🕯️     |  
| 05.12.2021 | 🕯️🕯️   |   
| 12.12.2021 | 🕯️🕯️🕯️  |   
| 19.12.2021 | 🕯️🕯️🕯️🕯️ |   

## Die Adventskranz-Formel
Die längstmögliche Adventszeit dauert 28 Tage. Wie zum Beispiel 2022 fällt dann der 1. Advent auf den 27.11. und Heiligabend ist an einem Samstag. Die kürzestmögliche Adventszeit dauert 22 Tage, wenn wie im Jahr 2023 Heiligabend der 4. Adventssonntag ist.


| Monat    | Tag des Monats | Tag im Advent | 1 (So) | 2 (Mo) | 3 (Di) | 4 (Mi) | 5 (Do) | 6 (Fr) | 7 (Sa) |
|----------|----------------|---------------|--------|--------|--------|--------|--------|--------|--------|
| November | 27             | 1             | 1      |        |        |        |        |        |        |
| November | 28             | 2             | 1      | 1      |        |        |        |        |        |
| November | 29             | 3             | 1      | 1      | 1      |        |        |        |        |
| November | 30             | 4             | 1      | 1      | 1      | 1      |        |        |        |
| Dezember | 1              | 5             | 1      | 1      | 1      | 1      | 1      |        |        |
| Dezember | 2              | 6             | 1      | 1      | 1      | 1      | 1      | 1      |        |
| Dezember | 3              | 7             | 1      | 1      | 1      | 1      | 1      | 1      | 1      |
| Dezember | 4              | 8             | 2      | 1      | 1      | 1      | 1      | 1      | 1      |
| Dezember | 5              | 9             | 2      | 2      | 1      | 1      | 1      | 1      | 1      |
| Dezember | 6              | 10            | 2      | 2      | 2      | 1      | 1      | 1      | 1      |
| Dezember | 7              | 11            | 2      | 2      | 2      | 2      | 1      | 1      | 1      |
| Dezember | 8              | 12            | 2      | 2      | 2      | 2      | 2      | 1      | 1      |
| Dezember | 9              | 13            | 2      | 2      | 2      | 2      | 2      | 2      | 1      |
| Dezember | 10             | 14            | 2      | 2      | 2      | 2      | 2      | 2      | 2      |
| Dezember | 11             | 15            | 3      | 2      | 2      | 2      | 2      | 2      | 2      |
| Dezember | 12             | 16            | 3      | 3      | 2      | 2      | 2      | 2      | 2      |
| Dezember | 13             | 17            | 3      | 3      | 3      | 2      | 2      | 2      | 2      |
| Dezember | 14             | 18            | 3      | 3      | 3      | 3      | 2      | 2      | 2      |
| Dezember | 15             | 19            | 3      | 3      | 3      | 3      | 3      | 2      | 2      |
| Dezember | 16             | 20            | 3      | 3      | 3      | 3      | 3      | 3      | 2      |
| Dezember | 17             | 21            | 3      | 3      | 3      | 3      | 3      | 3      | 3      |
| Dezember | 18             | 22            | 4      | 3      | 3      | 3      | 3      | 3      | 3      |
| Dezember | 19             | 23            | 4      | 4      | 3      | 3      | 3      | 3      | 3      |
| Dezember | 20             | 24            | 4      | 4      | 4      | 3      | 3      | 3      | 3      |
| Dezember | 21             | 25            | 4      | 4      | 4      | 4      | 3      | 3      | 3      |
| Dezember | 22             | 26            | 4      | 4      | 4      | 4      | 4      | 3      | 3      |
| Dezember | 23             | 27            | 4      | 4      | 4      | 4      | 4      | 4      | 3      |
| Dezember | 24             | 28            | 4      | 4      | 4      | 4      | 4      | 4      | 4      |
