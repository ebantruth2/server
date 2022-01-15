// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse -identity-naming xidb.sql ../src/database xidb
#ifndef XIDB_MOB_SPAWN_MODS_H
#define XIDB_MOB_SPAWN_MODS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace mob_spawn_mods_
  {
    struct mobid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mobid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mobid;
            T& operator()() { return mobid; }
            const T& operator()() const { return mobid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
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
  } // namespace mob_spawn_mods_

  struct mob_spawn_mods: sqlpp::table_t<mob_spawn_mods,
               mob_spawn_mods_::mobid,
               mob_spawn_mods_::modid,
               mob_spawn_mods_::value,
               mob_spawn_mods_::is_mob_mod>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "mob_spawn_mods";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T mob_spawn_mods;
        T& operator()() { return mob_spawn_mods; }
        const T& operator()() const { return mob_spawn_mods; }
      };
    };
  };
} // namespace xidb
#endif
