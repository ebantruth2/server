// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse -identity-naming xidb.sql ../src/database xidb
#ifndef XIDB_CHAR_SPELLS_H
#define XIDB_CHAR_SPELLS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace char_spells_
  {
    struct charid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "charid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T charid;
            T& operator()() { return charid; }
            const T& operator()() const { return charid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
    };
    struct spellid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "spellid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T spellid;
            T& operator()() { return spellid; }
            const T& operator()() const { return spellid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
  } // namespace char_spells_

  struct char_spells: sqlpp::table_t<char_spells,
               char_spells_::charid,
               char_spells_::spellid>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "char_spells";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T char_spells;
        T& operator()() { return char_spells; }
        const T& operator()() const { return char_spells; }
      };
    };
  };
} // namespace xidb
#endif
