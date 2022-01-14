// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables xidb.sql ../src/database xidb
#ifndef XIDB_ZONE_SETTINGS_H
#define XIDB_ZONE_SETTINGS_H

#include <sqlpp11/char_sequence.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/table.h>

namespace xidb
{
    namespace ZoneSettings_
    {
        struct Zoneid
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "zoneid";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  zoneid;
                    T& operator()()
                    {
                        return zoneid;
                    }
                    const T& operator()() const
                    {
                        return zoneid;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
        };
        struct Zonetype
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "zonetype";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  zonetype;
                    T& operator()()
                    {
                        return zonetype;
                    }
                    const T& operator()() const
                    {
                        return zonetype;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
        };
        struct Zoneip
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "zoneip";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  zoneip;
                    T& operator()()
                    {
                        return zoneip;
                    }
                    const T& operator()() const
                    {
                        return zoneip;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
        };
        struct Zoneport
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "zoneport";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  zoneport;
                    T& operator()()
                    {
                        return zoneport;
                    }
                    const T& operator()() const
                    {
                        return zoneport;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
        };
        struct Name
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "name";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  name;
                    T& operator()()
                    {
                        return name;
                    }
                    const T& operator()() const
                    {
                        return name;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
        };
        struct MusicDay
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "music_day";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  musicDay;
                    T& operator()()
                    {
                        return musicDay;
                    }
                    const T& operator()() const
                    {
                        return musicDay;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
        struct MusicNight
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "music_night";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  musicNight;
                    T& operator()()
                    {
                        return musicNight;
                    }
                    const T& operator()() const
                    {
                        return musicNight;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
        struct Battlesolo
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "battlesolo";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  battlesolo;
                    T& operator()()
                    {
                        return battlesolo;
                    }
                    const T& operator()() const
                    {
                        return battlesolo;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
        struct Battlemulti
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "battlemulti";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  battlemulti;
                    T& operator()()
                    {
                        return battlemulti;
                    }
                    const T& operator()() const
                    {
                        return battlemulti;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
        struct Restriction
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "restriction";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  restriction;
                    T& operator()()
                    {
                        return restriction;
                    }
                    const T& operator()() const
                    {
                        return restriction;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
        struct Tax
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "tax";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  tax;
                    T& operator()()
                    {
                        return tax;
                    }
                    const T& operator()() const
                    {
                        return tax;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::floating_point>;
        };
        struct Misc
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "misc";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  misc;
                    T& operator()()
                    {
                        return misc;
                    }
                    const T& operator()() const
                    {
                        return misc;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
        };
    } // namespace ZoneSettings_

    struct ZoneSettings : sqlpp::table_t<ZoneSettings,
                                         ZoneSettings_::Zoneid,
                                         ZoneSettings_::Zonetype,
                                         ZoneSettings_::Zoneip,
                                         ZoneSettings_::Zoneport,
                                         ZoneSettings_::Name,
                                         ZoneSettings_::MusicDay,
                                         ZoneSettings_::MusicNight,
                                         ZoneSettings_::Battlesolo,
                                         ZoneSettings_::Battlemulti,
                                         ZoneSettings_::Restriction,
                                         ZoneSettings_::Tax,
                                         ZoneSettings_::Misc>
    {
        struct _alias_t
        {
            static constexpr const char _literal[] = "zone_settings";
            using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
            template <typename T>
            struct _member_t
            {
                T  zoneSettings;
                T& operator()()
                {
                    return zoneSettings;
                }
                const T& operator()() const
                {
                    return zoneSettings;
                }
            };
        };
    };
} // namespace xidb
#endif
