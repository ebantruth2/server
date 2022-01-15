// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse -identity-naming xidb.sql ../src/database xidb
#ifndef XIDB_CAMPAIGN_NATION_H
#define XIDB_CAMPAIGN_NATION_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace campaign_nation_
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
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct reconnaissance
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "reconnaissance";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T reconnaissance;
            T& operator()() { return reconnaissance; }
            const T& operator()() const { return reconnaissance; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct morale
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "morale";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T morale;
            T& operator()() { return morale; }
            const T& operator()() const { return morale; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct prosperity
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "prosperity";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T prosperity;
            T& operator()() { return prosperity; }
            const T& operator()() const { return prosperity; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
  } // namespace campaign_nation_

  struct campaign_nation: sqlpp::table_t<campaign_nation,
               campaign_nation_::id,
               campaign_nation_::reconnaissance,
               campaign_nation_::morale,
               campaign_nation_::prosperity>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "campaign_nation";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T campaign_nation;
        T& operator()() { return campaign_nation; }
        const T& operator()() const { return campaign_nation; }
      };
    };
  };
} // namespace xidb
#endif
