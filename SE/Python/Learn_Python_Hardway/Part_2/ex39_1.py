#!/bin/python3

# Creating list
regions = {
    'Greater-Accra': 'GAA', 'Eastern': 'KOF', 'Ashanti': 'ASH', 'Central': 'CAP', 'Volta': 'HO'
}

# Using the list function with dictionaries
print(regions.get('Volta'))
print(regions.items())
for region , abbrev in list(regions.items()):
    print(f"The region {region} has the following abbreviation: {abbrev}")

# Using dictionaries withou the list function
for region, abbrev in regions.items():
    print(f"{region} has the abbreviation {abbrev}")

# Using enumerate to get the index of keys in a dictionary 
for region, abbrev in enumerate(regions):
    print(abbrev, region)
