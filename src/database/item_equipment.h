// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables xidb.sql ../src/database xidb
#ifndef XIDB_ITEM_EQUIPMENT_H
#define XIDB_ITEM_EQUIPMENT_H

#include <sqlpp11/char_sequence.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/table.h>

namespace xidb
{
    namespace ItemEquipment_
    {
        struct ItemId
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "itemId";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  itemId;
                    T& operator()()
                    {
                        return itemId;
                    }
                    const T& operator()() const
                    {
                        return itemId;
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
        struct Level
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "level";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  level;
                    T& operator()()
                    {
                        return level;
                    }
                    const T& operator()() const
                    {
                        return level;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
        struct Ilevel
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "ilevel";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  ilevel;
                    T& operator()()
                    {
                        return ilevel;
                    }
                    const T& operator()() const
                    {
                        return ilevel;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
        struct Jobs
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "jobs";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  jobs;
                    T& operator()()
                    {
                        return jobs;
                    }
                    const T& operator()() const
                    {
                        return jobs;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
        };
        struct MId
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "MId";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  MId;
                    T& operator()()
                    {
                        return MId;
                    }
                    const T& operator()() const
                    {
                        return MId;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
        };
        struct ShieldSize
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "shieldSize";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  shieldSize;
                    T& operator()()
                    {
                        return shieldSize;
                    }
                    const T& operator()() const
                    {
                        return shieldSize;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
        struct ScriptType
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "scriptType";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  scriptType;
                    T& operator()()
                    {
                        return scriptType;
                    }
                    const T& operator()() const
                    {
                        return scriptType;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
        };
        struct Slot
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "slot";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  slot;
                    T& operator()()
                    {
                        return slot;
                    }
                    const T& operator()() const
                    {
                        return slot;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
        };
        struct Rslot
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "rslot";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  rslot;
                    T& operator()()
                    {
                        return rslot;
                    }
                    const T& operator()() const
                    {
                        return rslot;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
        };
        struct SuLevel
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "su_level";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  suLevel;
                    T& operator()()
                    {
                        return suLevel;
                    }
                    const T& operator()() const
                    {
                        return suLevel;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
    } // namespace ItemEquipment_

    struct ItemEquipment : sqlpp::table_t<ItemEquipment,
                                          ItemEquipment_::ItemId,
                                          ItemEquipment_::Name,
                                          ItemEquipment_::Level,
                                          ItemEquipment_::Ilevel,
                                          ItemEquipment_::Jobs,
                                          ItemEquipment_::MId,
                                          ItemEquipment_::ShieldSize,
                                          ItemEquipment_::ScriptType,
                                          ItemEquipment_::Slot,
                                          ItemEquipment_::Rslot,
                                          ItemEquipment_::SuLevel>
    {
        struct _alias_t
        {
            static constexpr const char _literal[] = "item_equipment";
            using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
            template <typename T>
            struct _member_t
            {
                T  itemEquipment;
                T& operator()()
                {
                    return itemEquipment;
                }
                const T& operator()() const
                {
                    return itemEquipment;
                }
            };
        };
    };
} // namespace xidb
#endif
