TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        add_book.c \
        add_department.c \
        borrow_book.c \
        delete_book.c \
        display_books.c \
        file_operations.c \
        libray.c \
        load_data.c \
        main.c \
        main1.c \
        return_book.c \
        save_data.c \
        search_book_by_name.c \
        sort_books_by_author.c \
        sort_books_by_name.c \
        update_book.c

HEADERS += \
    add_book.h \
    add_department.h \
    borrow_book.h \
    delete_book.h \
    display_books.h \
    file_operations.h \
    libray.h \
    load_data.h \
    main1.h \
    return_book.h \
    save_data.h \
    search_book_by_name.h \
    sort_books_by_author.h \
    sort_books_by_name.h \
    update_book.h
