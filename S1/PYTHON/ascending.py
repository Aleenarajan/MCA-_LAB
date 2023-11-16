my_dict={'one':1,'three':3,'five':5,'two':2,'four':4}
sorted_dict_asc=dict(sorted(my_dict.items()))
print("Dictionary in ascending Order by keys:",sorted_dict_asc)
sorted_dict_desc=dict(sorted(my_dict.items(),reverse=True))
print("Dictionary in Descending Order by keys:",sorted_dict_desc)
sorted_dict_asc_values=dict(sorted(my_dict.items,key=lamda item:item[1],reverse=true))
print("Dictionary in Descending order by values:",sorted_dict_desc_values)

