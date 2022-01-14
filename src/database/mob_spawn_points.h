// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables xidb.sql ../src/database xidb
#ifndef XIDB_MOB_SPAWN_POINTS_H
#define XIDB_MOB_SPAWN_POINTS_H

#include <sqlpp11/char_sequence.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/table.h>

namespace xidb
{
    namespace MobSpawnPoints_
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
            using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::can_be_null>;
        };
        struct Mobname
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "mobname";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  mobname;
                    T& operator()()
                    {
                        return mobname;
                    }
                    const T& operator()() const
                    {
                        return mobname;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
        };
        struct PolutilsName
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "polutils_name";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  polutilsName;
                    T& operator()()
                    {
                        return polutilsName;
                    }
                    const T& operator()() const
                    {
                        return polutilsName;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
        };
        struct Groupid
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "groupid";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  groupid;
                    T& operator()()
                    {
                        return groupid;
                    }
                    const T& operator()() const
                    {
                        return groupid;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
        };
        struct PosX
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "pos_x";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  posX;
                    T& operator()()
                    {
                        return posX;
                    }
                    const T& operator()() const
                    {
                        return posX;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::floating_point>;
        };
        struct PosY
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "pos_y";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  posY;
                    T& operator()()
                    {
                        return posY;
                    }
                    const T& operator()() const
                    {
                        return posY;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::floating_point>;
        };
        struct PosZ
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "pos_z";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  posZ;
                    T& operator()()
                    {
                        return posZ;
                    }
                    const T& operator()() const
                    {
                        return posZ;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::floating_point>;
        };
        struct PosRot
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "pos_rot";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  posRot;
                    T& operator()()
                    {
                        return posRot;
                    }
                    const T& operator()() const
                    {
                        return posRot;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
    } // namespace MobSpawnPoints_

    struct MobSpawnPoints : sqlpp::table_t<MobSpawnPoints,
                                           MobSpawnPoints_::Mobid,
                                           MobSpawnPoints_::Mobname,
                                           MobSpawnPoints_::PolutilsName,
                                           MobSpawnPoints_::Groupid,
                                           MobSpawnPoints_::PosX,
                                           MobSpawnPoints_::PosY,
                                           MobSpawnPoints_::PosZ,
                                           MobSpawnPoints_::PosRot>
    {
        struct _alias_t
        {
            static constexpr const char _literal[] = "mob_spawn_points";
            using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
            template <typename T>
            struct _member_t
            {
                T  mobSpawnPoints;
                T& operator()()
                {
                    return mobSpawnPoints;
                }
                const T& operator()() const
                {
                    return mobSpawnPoints;
                }
            };
        };
    };
} // namespace xidb
#endif
