#!/bin/python3

# Creating list
regions = {
    'Greater-Accra': 'GAA', 'Eastern': 'KOF', 'Ashanti': 'ASH', 'Central': 'CAP', 'Volta': 'HO'
}

print(regions.get('Volta'))
print(regions.items())
for region , abbrev in list(regions.items()):
    print(f"The region {region} has the following abbreviation: {abbrev}")
