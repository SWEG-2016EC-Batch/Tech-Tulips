

## Input
1. tank_capacity: The capacity of the fuel tank in gallons (double).
2. miles_per_Gallon: The number of miles the automobile can travel per gallon (double).

---

## Process
1. Prompt the user to enter the capacity of the fuel tank (tank_capacity).
2. Prompt the user to enter the miles per gallon (miles_per_Gallon).
3. Calculate the total miles the automobile can travel without refueling (miles) using the formula:
   \[
   \text{miles} = \text{tank_capacity} \times \text{miles_per_Gallon}
   \]
4. Display the total miles the automobile can travel.

---

## Output
- miles: The total number of miles the automobile can travel without refueling.




## Pseudocode

1. Start
2. Declare variables:
   - tank_capacity as double (capacity of the fuel tank in gallons).
   - miles_per_Gallon as double (miles the automobile can travel per gallon).
   - miles as double (total miles the automobile can travel without refueling).
3. Print "Enter the capacity of the fuel tank of an automobile in gallons:"
4. Input tank_capacity.
5. Print "Enter the miles per gallon of the automobile can be driven:"
6. Input miles_per_Gallon.
7. Calculate miles using the formula:
   \[
   \text{miles} = \text{tank_capacity} \times \text{miles_per_Gallon}
   \]
8. Print "The automobile can be driven ", miles, " miles without refueling."
9. End


## flowchart

```mermaid
graph TD
    A([Start Program]) --> B[/"Enter the capacity of the fuel tank of an automobile in gallons"/]
    B --> C[/Input tank_capacity/]
    C --> D[/"Enter the miles per gallon the automobile can be driven"/]
    D --> E[/Input miles_per_Gallon/]
    E --> F["Total miles = tank_capacity * miles_per_Gallon"]
    F --> G[/Print 'The automobile can be driven ' + miles + ' miles without refueling.'/]
    G --> H([End Program])
```
