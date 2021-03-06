# Вариант лабораторной работы :

### Обобщенный артефакт: 
Языки программирования

### Организация контейнера:
Контейнер на основе одномерного массива элементов с проверкой на переполнение.

### Организация модульной структуры программы:
1.Клиентская часть программы (тестовая функция) размещается в отдельном модуле. Основная часть кода, определяющего реализацию функций или методов,содержится в другом (едином) модуле. Программные объекты, обеспечивающие связь между основной и клиентской частями(абстрактные типы данных, сигнатуры функций, описания классов), размещается в отдельном интерфейсном модуле (заголовочном файле)

### Организация обобщений в процедурной программе:
3.Обобщение, использующее общую основу(базовую структуру), которая повторяется в каждой из отдельно прописанных специализаций.
Третий из вариантов предполагает использовать в качестве обобщения базовую структуру, содержащую только ключ: struct обобщение 3 {ключ;}
Тогдалюбая специализация будет иметь следующий вид:struct специализация из 3 {ключ; основа специализации i}

# Как создать файл с входными данными для программ:


## Входной файл для процедурной программы
```
<Целое положительное число>                                                          #количество строк, которое нужно обработать
{0, <название языка>, 0|1, <год создания>, <количество упоминаний в интернете>}      #Описание объектно ориентированного языка
{1, <название языка>, 0|1, <год создания>, <количество упоминаний в интернете>}      #Описание процедурного языка
{2, <название языка>, 0|1, 0|1, <год создания>, <количество упоминаний в интернете>} #Описание функционального языка
```

### Пример:
```
4
0 C# 1 1998 60
1 pascal 1 1970 60
2 haskell 0 1 1990 231
2 lisp 1 0 1958 321
```

### Результат:
```
Объектно ориентированный язык программирования  c множественным наследованием "C#" был разработан в 1998 году. На данный момент возраст этого языка равен 22. Количество упоминаний о данном языке в сети Интернет: 60
Процедурный язык программирования  c наличием абстрактных типов данных "pascal" был разработан в 1970 году. На данный момент возраст этого языка равен 50. Количество упоминаний о данном языке в сети Интернет: 60
Функциональный язык программирования  без поддержки ленивый вычислений c динамической типизацией "haskell" был разработан в 1990 году. На данный момент возраст этого языка равен 30. Количество упоминаний о данном языке в сети Интернет: 231
Функциональный язык программирования  c поддержкой ленивый вычислений с строгой типизацией "lisp" был разработан в 1958 году. На данный момент возраст этого языка равен 62. Количество упоминаний о данном языке в сети Интернет: 321
```

## Входной файл для ООП программы
```
{0, 0|1|2, <год создания>, <количество упоминаний в интернете>}			#Описание объектно ориентированного языка
{1, 0|1, <год создания>, <количество упоминаний в интернете>}			#Описание процедурного языка
{2, 0|1, 0|1, <год создания>, <количество упоминаний в интернете>}		#Описание функционального языка
```

### Пример:
```
0 1 1984 156
1 1 1993 325
2 0 1 2001 412
```

### Результат:
```
Filled container. 
Container contents 3 elements. 
0: Объектно ориентированный язык программирования  c поддержкой интерфейсов был разработан в 1984 году.Количество упоминаний о данном языке в сети Интернет: 156
Возраст данного языка равен 36
1: Процедурный язык программирования  c наличием абстрактных типов данных был разработан в 1993 году.Количество упоминаний о данном языке в сети Интернет: 325
Возраст данного языка равен 27
2: Это функциональный язык программирования с динамической типизацией без поддержки ленивый вычислений, который был создан в 2001году. Количество упоминаний о данном языке в сети Интернет: 412
Возраст данного языка равен 19
Empty container.
Container contents 0 elements.
```