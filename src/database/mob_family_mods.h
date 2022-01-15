// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse -identity-naming xidb.sql ../src/database xidb
#ifndef XIDB_MOB_FAMILY_MODS_H
#define XIDB_MOB_FAMILY_MODS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace mob_family_mods_
  {
    struct familyid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "familyid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T familyid;
            T& operator()() { return familyid; }
            const T& operator()() const { return familyid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct modid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "modid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T modid;
            T& operator()() { return modid; }
            const T& operator()() const { return modid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct value
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "value";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T value;
            T& operator()() { return value; }
            const T& operator()() const { return value; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct is_mob_mod
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "is_mob_mod";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T is_mob_mod;
            T& operator()() { return is_mob_mod; }
            const T& operator()() const { return is_mob_mod; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint>;
    };
  } // namespace mob_family_mods_

  struct mob_family_mods: sqlpp::table_t<mob_family_mods,
               mob_family_mods_::familyid,
               mob_family_mods_::modid,
               mob_family_mods_::value,
               mob_family_mods_::is_mob_mod>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "mob_family_mods";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T mob_family_mods;
        T& operator()() { return mob_family_mods; }
        const T& operator()() const { return mob_family_mods; }
      };
    };
  };
} // namespace xidb
#endif
