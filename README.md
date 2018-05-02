# DATE
Simple class for work with date


#### Данный класс имеет базовые функции get и set:
* `getDay()` - Получить день
* `getMonth()` - Получить месяц
* `getYear()` - Получить год
* `setDay()` - Установить день
* `setMonth()` - Установить месяц
* `setYear()` - Установить год
* `setAll()` - Установить всё

#### Также класс имеет следующие перегруженные операторы:
* `+` - Сложение
* `-` - Вычитание
* `=` - Присваивание
* `<<` - Вывод в поток
* `>>` - Ввод с потока
* `>` - Больше
* `<` - Меньше
* `==` -Равно
* `!=` - Не равно

#### Также существуют следующие вспомогательные процедуры:
- `isCorrect()` - Проверка на корректность данных
- `toDays()` - Конвертирование в дни
- `toMonths()` - Конвертирование в месяцы
- `toString()` - Конвертирование в стоку
- `isLeap()` - Определение високосности 

#### Пример: 
```c++ 
DATE example, example2;
cin >> example;
cin >> example2;
if (example.isCorrect() && example2.isCorrect()) 
{
	if (example != example2) {
		if (example > example2) cout << example << " is bigger then " << example2;
		else cout << example2 << " is bigger then " << example;
	}
	else cout << example2 << " is equals with " << example;
} 
```
@pabushabi