// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables xidb.sql ../src/database xidb
#ifndef XIDB_MOB_SPAWN_MODS_H
#define XIDB_MOB_SPAWN_MODS_H

#include <sqlpp11/char_sequence.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/table.h>

namespace xidb
{
    namespace MobSpawnMods_
    {
        struct Mobid
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "mobid";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  mobid;
                    T& operator()()
                    {
                        return mobid;
                    }
                    const T& operator()() const
                    {
                        return mobid;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
        };
        struct Modid
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "modid";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  modid;
                    T& operator()()
                    {
                        return modid;
                    }
                    const T& operator()() const
                    {
                        return modid;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
        };
        struct Value
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "value";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  value;
                    T& operator()()
                    {
                        return value;
                    }
                    const T& operator()() const
                    {
                        return value;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::smallint>;
        };
        struct IsMobMod
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "is_mob_mod";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  isMobMod;
                    T& operator()()
                    {
                        return isMobMod;
                    }
                    const T& operator()() const
                    {
                        return isMobMod;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint>;
        };
    } // namespace MobSpawnMods_

    struct MobSpawnMods : sqlpp::table_t<MobSpawnMods,
                                         MobSpawnMods_::Mobid,
                                         MobSpawnMods_::Modid,
                                         MobSpawnMods_::Value,
                                         MobSpawnMods_::IsMobMod>
    {
        struct _alias_t
        {
            static constexpr const char _literal[] = "mob_spawn_mods";
            using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
            template <typename T>
            struct _member_t
            {
                T  mobSpawnMods;
                T& operator()()
                {
                    return mobSpawnMods;
                }
                const T& operator()() const
                {
                    return mobSpawnMods;
                }
            };
        };
    };
} // namespace xidb
#endif
