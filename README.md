# QSmodel
Данный проект реализует имитационное моделирование одноканальной СМО с очередью поступающих заявок и отказами.
Время обработки и поступления заявок является случайной величиной, распределенной по линейному или экспоненциальному закону.
Принцип работы СМО - если сервер занят, то проступающая заявка отправляется в очередь. 
Размерность очереди задается вручную. Если при поступлении заявки происходит переполнение очереди, то заявка покидает ВС не обработанной.
## Характеристики ВС:
- P0 – вероятность того, что ВС не загружена,
- P1 – вероятность того, что сервер обрабатывает одну программу в буфер пуст,
- P2 – вероятность того, что в буфере народиться 1-на программа,
- P3 – вероятность того, что в буфере народиться 2-ве программы,
- P4 – вероятность того, что в буфере народиться 3-ри программы,
- Q – относительная пропуская способность ВС -  средняя доля программ, обработанных ВС,
- S – абсолютная пропускная способность – среднее число программ, обрадованных в единицу времени,
- Pотк – вероятность отказа, т.е. того, что программа будет не обработанной,
- Nпрог – среднее число программ в ВС,
- Tпрог – среднее время нахождения программы в ВС,
- Nбуф – среднее число программ в буфере,
- Tбуф – среднее время нахождения программы в буфере.

### Пример работы программы:

#### Линейный закон

Входные данные:
Tzmin=0,5        Tsmin=1
Tzmax=0,8333     Tsmax=5
Вывод:

![lt2](https://github.com/WM-admn/QSmodel/blob/main/images/lt2.png)

Входные данные:
Tzmin=0,3        Tsmin=1                
Tzmax=0,72       Tsmax=3  
Вывод:

![lt2](https://github.com/WM-admn/QSmodel/blob/main/images/lt2.png)


##### Экспоненциальный


Входные данные:
λ=1,5	           
t=2
Вывод:

![et1](https://github.com/WM-admn/QSmodel/blob/main/images/et1.png)

Входные данные:
λ=1,1	           
t=1,8
Вывод:

![et2](https://github.com/WM-admn/QSmodel/blob/main/images/et2.png)













