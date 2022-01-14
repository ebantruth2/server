// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables xidb.sql ../src/database xidb
#ifndef XIDB_CHAR_STYLE_H
#define XIDB_CHAR_STYLE_H

#include <sqlpp11/char_sequence.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/table.h>

namespace xidb
{
    namespace CharStyle_
    {
        struct Charid
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "charid";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  charid;
                    T& operator()()
                    {
                        return charid;
                    }
                    const T& operator()() const
                    {
                        return charid;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
        };
        struct Head
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "head";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  head;
                    T& operator()()
                    {
                        return head;
                    }
                    const T& operator()() const
                    {
                        return head;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
        };
        struct Body
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "body";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  body;
                    T& operator()()
                    {
                        return body;
                    }
                    const T& operator()() const
                    {
                        return body;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
        };
        struct Hands
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "hands";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  hands;
                    T& operator()()
                    {
                        return hands;
                    }
                    const T& operator()() const
                    {
                        return hands;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
        };
        struct Legs
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "legs";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  legs;
                    T& operator()()
                    {
                        return legs;
                    }
                    const T& operator()() const
                    {
                        return legs;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
        };
        struct Feet
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "feet";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  feet;
                    T& operator()()
                    {
                        return feet;
                    }
                    const T& operator()() const
                    {
                        return feet;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
        };
        struct Main
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "main";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  main;
                    T& operator()()
                    {
                        return main;
                    }
                    const T& operator()() const
                    {
                        return main;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
        };
        struct Sub
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "sub";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  sub;
                    T& operator()()
                    {
                        return sub;
                    }
                    const T& operator()() const
                    {
                        return sub;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
        };
        struct Ranged
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "ranged";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  ranged;
                    T& operator()()
                    {
                        return ranged;
                    }
                    const T& operator()() const
                    {
                        return ranged;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
        };
    } // namespace CharStyle_

    struct CharStyle : sqlpp::table_t<CharStyle,
                                      CharStyle_::Charid,
                                      CharStyle_::Head,
                                      CharStyle_::Body,
                                      CharStyle_::Hands,
                                      CharStyle_::Legs,
                                      CharStyle_::Feet,
                                      CharStyle_::Main,
                                      CharStyle_::Sub,
                                      CharStyle_::Ranged>
    {
        struct _alias_t
        {
            static constexpr const char _literal[] = "char_style";
            using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
            template <typename T>
            struct _member_t
            {
                T  charStyle;
                T& operator()()
                {
                    return charStyle;
                }
                const T& operator()() const
                {
                    return charStyle;
                }
            };
        };
    };
} // namespace xidb
#endif
