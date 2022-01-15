// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse -identity-naming xidb.sql ../src/database xidb
#ifndef XIDB_PET_NAME_H
#define XIDB_PET_NAME_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace pet_name_
  {
    struct id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T id;
            T& operator()() { return id; }
            const T& operator()() const { return id; }
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
      using _traits = sqlpp::make_traits<sqlpp::char_, sqlpp::tag::can_be_null>;
    };
  } // namespace pet_name_

  struct pet_name: sqlpp::table_t<pet_name,
               pet_name_::id,
               pet_name_::name>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "pet_name";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T pet_name;
        T& operator()() { return pet_name; }
        const T& operator()() const { return pet_name; }
      };
    };
  };
} // namespace xidb
#endif
