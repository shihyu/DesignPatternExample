The basis for this example was taken from the 'Menus" project in the 'Composite' 
folder. I did not implement every menu item, doing so would not have added to
the illustration of the pattern.

The 'Health Rating' formula is contrived, although the values for Cholesterol,
Carbohydrates, Calories, Fat, Protein, Sodium, and recommended Daily values came
from nutritional web-sites. Yes, I actually spend and evening looking them all
up. :-) 'Health Rating is shown following a vertical bar (|) and is the total
of all ingredients in a menu item.

Menu Items show a lower-case 'v' in parenthesis (v) if an item and its ingredients
are all vegetarian. After each ingredient, its quantity is shown in parenthesis. 
For example Eggs (2) or pancakes (6).

For ease of formatting, toString() outputs a 'tab' (\t) delimited string separating
properties such as 'Title' and 'Description' or, 'Name' and 'Quantity'. In this way,
parsing and alternate forms of formatting can be implemented.

As always, constructive feedback is welcomed.


