# 42 C++ Modules

## Proje Hakkında (TR)
Bu repo, 42 okulunun müfredatındaki C++ modüllerini kapsamaktadır. Amacım, C programlama dilinden Nesne Yönelimli Programlama'ya (OOP) geçiş yaparak, C++98 standartları çerçevesinde modern yazılım geliştirme prensiplerini kavramaktır.

## Modül İçerikleri
- **CPP 00**: İlk adım; namespaces, sınıflar, üye fonksiyonlar ve standart giriş/çıkış akışları.
- **CPP 01**: Bellek yönetimi; allocation, pointers to members, references ve switch kullanımı.
- **CPP 02**: Ad-hoc polymorphism; operatör aşırı yükleme (operator overloading) ve sabit noktalı sayılar (fixed-point numbers).
- **CPP 03**: Kalıtım (Inheritance) prensipleri.
- **CPP 04**: Subtype polymorphism; abstract sınıflar ve arayüzler (interfaces).
- **CPP 05**: Hata yönetimi (Exceptions) ve Try-Catch blokları.
- **CPP 06**: Tür dönüşümleri (C++ Casts).
- **CPP 07**: Şablonlar (Templates); jenerik programlamaya giriş.
- **CPP 08**: STL (Standard Template Library) kapları ve algoritmaları.
- **CPP 09**: Gelişmiş STL kullanımı ve veri yapıları (Containers).

## Teknik Standartlar
- **C++98**: Tüm projeler C++98 standartlarına uygun olarak geliştirilmiştir.
- **Ortodoks Kanonik Sınıf Formu**: Sınıf tasarımlarında yapıcı, kopyalama yapıcısı, atama operatörü ve yıkıcı zorunlu olarak kullanılmıştır.
- **Bellek Yönetimi**: Bellek sızıntılarını tespit etmek için projeler Valgrind ile test edilmiştir.

---

## About the Project (EN)
This repository contains the complete series of C++ modules from the 42 curriculum. The goal is to master Object-Oriented Programming (OOP) concepts within the C++98 standard, transitioning from procedural C to modern software design patterns.

## Module Overview
- **CPP 00**: Basics; namespaces, classes, member functions, and std I/O.
- **CPP 01**: Memory management; allocation, references, and member pointers.
- **CPP 02**: Ad-hoc polymorphism; operator overloading and fixed-point numbers.
- **CPP 03**: Principles of Inheritance.
- **CPP 04**: Subtype polymorphism; abstract classes and interfaces.
- **CPP 05**: Exception handling and Try-Catch mechanisms.
- **CPP 06**: C++ Casts and type conversions.
- **CPP 07**: Templates and generic programming.
- **CPP 08**: Introduction to STL (Standard Template Library) containers and algorithms.
- **CPP 09**: Advanced STL usage and complex data structures.

## Technical Standards
- **C++98**: All projects have been developed according to C++98 standards.
- **Orthodox Canonical Class Form**: Class designs strictly include a default constructor, copy constructor, assignment operator, and destructor.
- **Memory Management**: All modules have been tested with Valgrind to ensure zero memory leaks.

---

## Kurulum ve Kullanım / Installation & Usage
Her modül kendi dizini içinde bağımsız bir Makefile barındırır. / Each module contains an independent Makefile within its own directory.

1. Derleme (Compilation)
   ```bash
   cd cpp0x/ex0x
   make
2. Çalıştırma (Running)
   ```bash
   ./program_name
   
