// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_MOB_SPELL_LISTS_H
#define XIDB_MOB_SPELL_LISTS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace MobSpellLists_
  {
    struct SpellListName
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "spell_list_name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T spellListName;
            T& operator()() { return spellListName; }
            const T& operator()() const { return spellListName; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
    };
    struct SpellListId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "spell_list_id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T spellListId;
            T& operator()() { return spellListId; }
            const T& operator()() const { return spellListId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct SpellId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "spell_id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T spellId;
            T& operator()() { return spellId; }
            const T& operator()() const { return spellId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct MinLevel
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "min_level";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T minLevel;
            T& operator()() { return minLevel; }
            const T& operator()() const { return minLevel; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct MaxLevel
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "max_level";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T maxLevel;
            T& operator()() { return maxLevel; }
            const T& operator()() const { return maxLevel; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
  } // namespace MobSpellLists_

  struct MobSpellLists: sqlpp::table_t<MobSpellLists,
               MobSpellLists_::SpellListName,
               MobSpellLists_::SpellListId,
               MobSpellLists_::SpellId,
               MobSpellLists_::MinLevel,
               MobSpellLists_::MaxLevel>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "mob_spell_lists";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T mobSpellLists;
        T& operator()() { return mobSpellLists; }
        const T& operator()() const { return mobSpellLists; }
      };
    };
  };
} // namespace xidb
#endif
