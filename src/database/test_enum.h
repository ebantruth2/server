// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_TEST_ENUM_H
#define XIDB_TEST_ENUM_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace TestEnum_
  {
    struct ID
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "ID";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T ID;
            T& operator()() { return ID; }
            const T& operator()() const { return ID; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::can_be_null>;
    };
    struct Name
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Name;
            T& operator()() { return Name; }
            const T& operator()() const { return Name; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
    };
    struct IsActive
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "IsActive";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T IsActive;
            T& operator()() { return IsActive; }
            const T& operator()() const { return IsActive; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text>;
    };
  } // namespace TestEnum_

  struct TestEnum: sqlpp::table_t<TestEnum,
               TestEnum_::ID,
               TestEnum_::Name,
               TestEnum_::IsActive>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "test_enum";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T testEnum;
        T& operator()() { return testEnum; }
        const T& operator()() const { return testEnum; }
      };
    };
  };
} // namespace xidb
#endif
