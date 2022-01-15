// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_ITEM_MODS_PET_H
#define XIDB_ITEM_MODS_PET_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace ItemModsPet_
  {
    struct ItemId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "itemId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T itemId;
            T& operator()() { return itemId; }
            const T& operator()() const { return itemId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct ModId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "modId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T modId;
            T& operator()() { return modId; }
            const T& operator()() const { return modId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Value
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
    struct PetType
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "petType";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T petType;
            T& operator()() { return petType; }
            const T& operator()() const { return petType; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
  } // namespace ItemModsPet_

  struct ItemModsPet: sqlpp::table_t<ItemModsPet,
               ItemModsPet_::ItemId,
               ItemModsPet_::ModId,
               ItemModsPet_::Value,
               ItemModsPet_::PetType>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "item_mods_pet";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T itemModsPet;
        T& operator()() { return itemModsPet; }
        const T& operator()() const { return itemModsPet; }
      };
    };
  };
} // namespace xidb
#endif
