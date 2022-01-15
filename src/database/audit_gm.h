// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse -identity-naming xidb.sql ../src/database xidb
#ifndef XIDB_AUDIT_GM_H
#define XIDB_AUDIT_GM_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace audit_gm_
  {
    struct date_time
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "date_time";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T date_time;
            T& operator()() { return date_time; }
            const T& operator()() const { return date_time; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::time_point, sqlpp::tag::can_be_null>;
    };
    struct gm_name
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "gm_name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T gm_name;
            T& operator()() { return gm_name; }
            const T& operator()() const { return gm_name; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
    };
    struct command
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "command";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T command;
            T& operator()() { return command; }
            const T& operator()() const { return command; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
    };
    struct full_string
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "full_string";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T full_string;
            T& operator()() { return full_string; }
            const T& operator()() const { return full_string; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
    };
  } // namespace audit_gm_

  struct audit_gm: sqlpp::table_t<audit_gm,
               audit_gm_::date_time,
               audit_gm_::gm_name,
               audit_gm_::command,
               audit_gm_::full_string>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "audit_gm";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T audit_gm;
        T& operator()() { return audit_gm; }
        const T& operator()() const { return audit_gm; }
      };
    };
  };
} // namespace xidb
#endif
