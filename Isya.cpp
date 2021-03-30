﻿#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int otvet, num, kn, p, sim, v;
    bool continue_running = 1;
    cout << "\t\tЭКСПЕРТНАЯ СИСТЕМА ПО ВЫБОРУ СОТОВОГО ТЕЛЕФОНА." << endl << endl;
    while (continue_running) {
        cout << " Определите Ваш бюджет: " << endl;
        cout << " Нажмите 1, если бюджет низкий. " << endl;
        cout << " Нажмите 2, если бюджет средний. " << endl;
        cout << " Нажмите 3, если бюджет высокий. " << endl;
        cout << " Вы выбрали: "; cin >> otvet; cout << endl;

        if (otvet == 1) {
            cout << " Выберите тип устройства: " << endl;
            cout << " 1 - Кнопочный." << endl;  cout << " 2 - Смартфон." << endl;
            cout << " Вы выбрали: "; cin >> num; cout << endl;

            if (num == 1) {
                cout << " Выберите размер кнопок сотового телефона: " << endl;
                cout << " 1 - Крупные." << endl;  cout << " 2 - Не имеет значения." << endl;
                cout << " Вы выбрали: "; cin >> kn; cout << endl;

                if (kn == 1) {
                    cout << " Выберите необходимость наличия 2х SIM-карт сотового телефона: " << endl;
                    cout << " 1 - Нет." << endl;  cout << " 2 - Да." << endl;
                    cout << " Вы выбрали: "; cin >> sim; cout << endl;

                    if (sim == 1) {
                        cout << " Наша система предлагает Вам следующий вариант сотового телефона: " << endl << endl;
                        cout << " |МегаФон TDM15| " << endl;
                        cout << " Основные характеристики: " << endl;
                        cout << " Количество SIM-карт: 1" << endl << " Емкость батареи: 900 мАч" << endl << " Год выпуска: 2011" << endl << " Цвет: черный" << endl;
                    }
                    if (sim == 2) {
                        cout << " Наша система предлагает Вам следующий вариант сотового телефона: " << endl << endl;
                        cout << " |Philips Xenium E255| " << endl;
                        cout << " Основные характеристики: " << endl;
                        cout << " Количество SIM-карт: 2" << endl << " Емкость батареи: 1050 мАч" << endl << " Цвет: красный" << endl;
                    }
                }

                if (kn == 2) {
                    cout << " Выберите необходимость наличия 2х SIM-карт сотового телефона: " << endl;
                    cout << " 1 - Нет." << endl;  cout << " 2 - Да." << endl;
                    cout << " Вы выбрали: "; cin >> sim; cout << endl;

                    if (sim == 1) {
                        cout << " Наша система предлагает Вам следующий вариант сотового телефона: " << endl << endl;
                        cout << " |МегаФон TDM15| " << endl;
                        cout << " Основные характеристики: " << endl;
                        cout << " Количество SIM-карт: 1" << endl << " Емкость батареи: 900 мАч" << endl << " Год выпуска: 2011" << endl << " Цвет: черный" << endl;
                    }
                    if (sim == 2) {
                        cout << " Наша система предлагает Вам следующий вариант сотового телефона: " << endl << endl;
                        cout << " |Philips Xenium E255| " << endl;
                        cout << " Основные характеристики: " << endl;
                        cout << " Количество SIM-карт: 2" << endl << " Емкость батареи: 1050 мАч" << endl << " Цвет: красный" << endl;
                    }
                }
            }

            if (num == 2) {
                cout << " Выберите размер экрана сотового телефона: " << endl;
                cout << " 1 - Крупный." << endl;  cout << " 2 - Не имеет значения." << endl;
                cout << " Вы выбрали: "; cin >> kn; cout << endl;

                if (kn == 1) {
                    cout << " Наша система предлагает Вам следующий вариант сотового телефона: " << endl << endl;
                    cout << " |Itel A48| " << endl;
                    cout << " Основные характеристики: " << endl;
                    cout << " Год выпуска: 2020" << endl << " Цвет: черный" << endl << " Количество SIM-карт: 2" << " 5G: нет" << endl << " Диагональ экрана: 6.1" << endl << " Объем встроенной памяти: 32 Гб" << endl << " Основная камера: 5 + 0.08 Мп " << endl << " Фронтальная камера: 5 Мп " << endl << " NFC: нет" << endl << " Емкость аккумулятора: 3000 мАч" << endl;
                }
                if (kn == 2) {
                    cout << " Выберите объем памяти сотового телефона: " << endl;
                    cout << " 1 - 32 Гб " << endl;  cout << " 2 - Не имеет значения." << endl;
                    cout << " Вы выбрали: "; cin >> p; cout << endl;

                    if (p == 1) {
                        cout << " Наша система предлагает Вам следующий вариант сотового телефона: " << endl << endl;
                        cout << " |Itel A48| " << endl;
                        cout << " Основные характеристики: " << endl;
                        cout << " Год выпуска: 2020" << endl << " Цвет: черный" << endl << " Количество SIM-карт: 2" << " 5G: нет" << endl << " Диагональ экрана: 6.1" << endl << " Объем встроенной памяти: 32 Гб" << endl << " Основная камера: 5 + 0.08 Мп " << endl << " Фронтальная камера: 5 Мп " << endl << " NFC: нет" << endl << " Емкость аккумулятора: 3000 мАч" << endl;
                    }
                    if (p == 2) {
                        cout << " Наша система предлагает Вам следующий вариант сотового телефона: " << endl << endl;
                        cout << " |DEXP G450| " << endl;
                        cout << " Основные характеристики: " << endl;
                        cout << " Год выпуска: 2020" << endl << " Цвет: серый" << endl << " Количество SIM-карт: 2 " << endl << "5G: нет" << endl;
                        cout << " Диагональ экрана: 5" << endl << " Объем встроенной памяти: 8 ГБ" << endl << " Основная камера : 2 Мп" << endl;
                        cout << " Фронтальная камера: 2 Мп" << endl << " NFC: есть" << endl << " Емкость аккумулятора: 2000 мАч" << endl;
                    }
                }
            }
        }

        if (otvet == 2) {
            cout << " Выберите год выпуска сотового телефона: " << endl;
            cout << " 1 - 2021 год." << endl;  cout << " 2 - 2020 год." << endl;
            cout << " Вы выбрали: "; cin >> num; cout << endl;

            if (num == 1) {
                cout << " Выберите объем памяти сотового телефона: " << endl;
                cout << " 1 - Больше 128 Гб" << endl;  cout << " 2 - Не имеет значения." << endl;
                cout << " Вы выбрали: "; cin >> kn; cout << endl;

                if (kn == 1) {
                    cout << " Наша система предлагает Вам следующий вариант сотового телефона: " << endl << endl;
                    cout << " |Xiaomi Redmi Note 9T| " << endl;
                    cout << " Основные характеристики: " << endl;
                    cout << " Год выпуска: 2021" << endl << " Цвет: черный" << endl << " Количество SIM-карт: 2 " << endl << " 5G: есть" << endl;
                    cout << " Диагональ экрана: 6.53" << endl << " Объем встроенной памяти: 64 ГБ" << endl << " Основная камера : 48 + 2 + 2 Мп" << endl;
                    cout << " Фронтальная камера: 13 Мп" << endl << " NFC: есть" << endl << " Емкость аккумулятора: 5000 мАч" << endl;
                }
                if (kn == 2) {
                    cout << " Наша система предлагает Вам следующий вариант сотового телефона: " << endl << endl;
                    cout << " |Samsung Galaxy A32| " << endl;
                    cout << " Основные характеристики: " << endl;
                    cout << " Год выпуска: 2021" << endl << " Цвет: черный/фиолетовыый/голубой" << endl << " Количество SIM-карт: 2 " << endl << " 5G: есть" << endl;
                    cout << " Диагональ экрана: 6.4" << endl << " Объем встроенной памяти: 128 ГБ" << endl << " Основная камера : 64 + 8 + 5 + 5 Мп" << endl;
                    cout << " Фронтальная камера: 20 Мп" << endl << " NFC: есть" << endl << " Емкость аккумулятора: 5000 мАч" << endl;
                }
            }

            if (num == 2) {
                cout << " Выберите расширение камеры сотового телефона: " << endl;
                cout << " 1 - Основная камера больше 30 мп " << endl;  cout << " 2 - Не имеет значения." << endl;
                cout << " Вы выбрали: "; cin >> kn; cout << endl;

                if (kn == 1) {
                    cout << " Наша система предлагает Вам следующий вариант сотового телефона: " << endl << endl;
                    cout << " |Honor 10X Lite| " << endl;
                    cout << " Основные характеристики: " << endl;
                    cout << " Год выпуска: 2020" << endl << " Цвет: черный" << endl << " Количество SIM-карт: 2 " << endl << " 5G: нет" << endl;
                    cout << " Диагональ экрана: 6.67" << endl << " Объем встроенной памяти: 128 ГБ" << endl << " Основная камера : 48 + 8 + 2 + 2 Мп" << endl;
                    cout << " Фронтальная камера: 8 Мп" << endl << " NFC: есть" << endl << " Емкость аккумулятора: 5000 мАч" << endl;
                }
                if (kn == 2) {
                    cout << " Выберите объем памяти сотового телефона: " << endl;
                    cout << " 1 - 128 Гб " << endl;  cout << " 2 - Меньше 128 Гб" << endl;
                    cout << " Вы выбрали: "; cin >> p; cout << endl;

                    if (p == 1) {
                        cout << " Наша система предлагает Вам следующий вариант сотового телефона: " << endl << endl;
                        cout << " |Honor 10X Lite| " << endl;
                        cout << " Основные характеристики: " << endl;
                        cout << " Год выпуска: 2020" << endl << " Цвет: черный" << endl << " Количество SIM-карт: 2 " << endl << " 5G: нет" << endl;
                        cout << " Диагональ экрана: 6.67" << endl << " Объем встроенной памяти: 128 ГБ" << endl << " Основная камера : 48 + 8 + 2 + 2 Мп" << endl;
                        cout << " Фронтальная камера: 8 Мп" << endl << " NFC: есть" << endl << " Емкость аккумулятора: 5000 мАч" << endl;
                    }
                    if (p == 2) {
                        cout << " Наша система предлагает Вам следующий вариант сотового телефона: " << endl;
                        cout << " |Xiaomi Redmi 9C| " << endl;
                        cout << " Основные характеристики: " << endl;
                        cout << " Год выпуска: 2020" << endl << " Цвет: серый/синий/оранжевый" << endl << " Количество SIM-карт: 2 " << endl << " 5G: нет" << endl;
                        cout << " Диагональ экрана: 6.53" << endl << " Объем встроенной памяти: 64 ГБ" << endl << " Основная камера : 13 + 2 Мп" << endl;
                        cout << " Фронтальная камера: 5 Мп" << endl << " NFC: есть" << endl << " Емкость аккумулятора: 5000 мАч" << endl;
                    }
                }
            }
        }

        if (otvet == 3) {
            cout << " Выберите расширение камеры сотового телефона: " << endl;
            cout << " 1 - Основная камера больше 30 мп " << endl;  cout << " 2 - Не имеет значения." << endl;
            cout << " Вы выбрали: "; cin >> num; cout << endl;

            if (num == 1) {
                cout << " Выберите емкость аккумулятора сотового телефона: " << endl;
                cout << " 1 - Меньше 5000 мАч " << endl;  cout << " 2 - Больше 5000 мАч " << endl;
                cout << " Вы выбрали: "; cin >> kn; cout << endl;

                if (kn == 1) {
                    cout << " Наша система предлагает Вам следующий вариант сотового телефона: " << endl << endl;
                    cout << " |Iphone 12| " << endl;
                    cout << " Основные характеристики: " << endl;
                    cout << " Год выпуска: 2020" << endl << " Цвет: черный/синий/красный/зеленый" << endl << " Количество SIM-карт: 1 " << endl << " 5G: есть" << endl;
                    cout << " Диагональ экрана: 6.1" << endl << " Объем встроенной памяти: 512 ГБ" << endl << " Основная камера : 12 + 12 Мп" << endl;
                    cout << " Фронтальная камера: 12 Мп" << endl << " NFC: есть" << endl << " Емкость аккумулятора: 2815 мАч" << endl;
                }
                if (kn == 2) {
                    cout << " Наша система предлагает Вам следующий вариант сотового телефона: " << endl << endl;
                    cout << " |Xiaomi Mi 10T Pro 8| " << endl;
                    cout << " Основные характеристики: " << endl;
                    cout << " Год выпуска: 2020" << endl << " Цвет: черный/серебристый/голубой" << endl << " Количество SIM-карт: 2 " << endl << " 5G: есть" << endl;
                    cout << " Диагональ экрана: 6.67" << endl << " Объем встроенной памяти: 256 ГБ" << endl << " Основная камера : 108 + 13 + 5 Мп" << endl;
                    cout << " Фронтальная камера: 20 Мп" << endl << " NFC: есть" << endl << " Емкость аккумулятора: 5000 мАч" << endl;
                }
            }

            if (num == 2) {
                cout << " Выберите необходимость поддержки NFC: " << endl;
                cout << " 1 - Нет." << endl;  cout << " 2 - Да." << endl;
                cout << " Вы выбрали: "; cin >> kn; cout << endl;

                if (kn == 1) {
                    cout << " Наша система предлагает Вам следующий вариант сотового телефона: " << endl << endl;
                    cout << " |Samsung Galaxy A02S| " << endl;
                    cout << " Основные характеристики: " << endl;
                    cout << " Год выпуска: 2020" << endl << " Цвет: черный/синий/белый" << endl << " Количество SIM-карт: 2 " << endl << " 5G: нет" << endl;
                    cout << " Диагональ экрана: 6.5" << endl << " Объем встроенной памяти: 32 ГБ" << endl << " Основная камера : 108 + 13 + 5 Мп" << endl;
                    cout << " Фронтальная камера: 13 + 2 + 2 Мп" << endl << " NFC: нет" << endl << " Емкость аккумулятора: 5000 мАч" << endl;
                }
                if (kn == 2) {
                    cout << " Выберите емкость аккумулятора сотового телефона: " << endl;
                    cout << " 1 - Меньше 5000 мАч " << endl;  cout << "  2 - Больше 5000 мАч " << endl;
                    cout << " Вы выбрали: "; cin >> p; cout << endl;

                    if (p == 1) {
                        cout << " Наша система предлагает Вам следующий вариант сотового телефона: " << endl << endl;
                        cout << " |Iphone 12| " << endl;
                        cout << " Основные характеристики: " << endl;
                        cout << " Год выпуска: 2020" << endl << " Цвет: черный/синий/красный/зеленый" << endl << " Количество SIM-карт: 1 " << endl << " 5G: есть" << endl;
                        cout << " Диагональ экрана: 6.1" << endl << " Объем встроенной памяти: 512 ГБ" << endl << " Основная камера : 12 + 12 Мп" << endl;
                        cout << " Фронтальная камера: 12 Мп" << endl << " NFC: есть" << endl << " Емкость аккумулятора: 2815 мАч" << endl;
                    }
                    if (p == 2) {
                        cout << " Наша система предлагает Вам следующий вариант сотового телефона: " << endl << endl;
                        cout << " |Xiaomi Mi 10T Pro 8| " << endl;
                        cout << " Основные характеристики: " << endl;
                        cout << " Год выпуска: 2020" << endl << " Цвет: черный/серебристый/голубой" << endl << " Количество SIM-карт: 2 " << endl << " 5G: есть" << endl;
                        cout << " Диагональ экрана: 6.67" << endl << " Объем встроенной памяти: 256 ГБ" << endl << " Основная камера : 108 + 13 + 5 Мп" << endl;
                        cout << " Фронтальная камера: 20 Мп" << endl << " NFC: есть" << endl << " Емкость аккумулятора: 5000 мАч" << endl;
                    }
                }
            }
        }

        cout << endl << " Вас устроил выбор сотового телефона?" << endl;
        cout << " 1 - Нет." << "   2 - Да. " << endl;
        cout << " Вы выбрали: ";  cin >> v; cout << endl;
        if (v == 1) {
            cout << " Вы можете продолжить работу системы для выбора другого сотового телефона: " << endl;
            cout << " 0 - Нет. " << "   1 - Да. " << endl;
            cout << " Вы выбрали: ";  cin >> continue_running; cout << endl;
        }
        if (v == 2) {
            cout << " Спасибо, что воспользовались нашей экспертной системой! Удачных покупок!" << endl;
            exit(0);
        }
    }
}


