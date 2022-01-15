// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse -identity-naming xidb.sql ../src/database xidb
#ifndef XIDB_ITEM_PUPPET_H
#define XIDB_ITEM_PUPPET_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace item_puppet_
  {
    struct itemid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "itemid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T itemid;
            T& operator()() { return itemid; }
            const T& operator()() const { return itemid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct name
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T name;
            T& operator()() { return name; }
            const T& operator()() const { return name; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
    };
    struct slot
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "slot";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T slot;
            T& operator()() { return slot; }
            const T& operator()() const { return slot; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct element
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "element";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T element;
            T& operator()() { return element; }
            const T& operator()() const { return element; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
  } // namespace item_puppet_

  struct item_puppet: sqlpp::table_t<item_puppet,
               item_puppet_::itemid,
               item_puppet_::name,
               item_puppet_::slot,
               item_puppet_::element>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "item_puppet";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T item_puppet;
        T& operator()() { return item_puppet; }
        const T& operator()() const { return item_puppet; }
      };
    };
  };
} // namespace xidb
#endif
