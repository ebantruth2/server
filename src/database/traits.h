// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse -identity-naming xidb.sql ../src/database xidb
#ifndef XIDB_TRAITS_H
#define XIDB_TRAITS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace traits_
  {
    struct traitid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "traitid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T traitid;
            T& operator()() { return traitid; }
            const T& operator()() const { return traitid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
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
    struct job
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "job";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T job;
            T& operator()() { return job; }
            const T& operator()() const { return job; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct level
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "level";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T level;
            T& operator()() { return level; }
            const T& operator()() const { return level; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct rank
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "rank";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T rank;
            T& operator()() { return rank; }
            const T& operator()() const { return rank; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct modifier
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "modifier";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T modifier;
            T& operator()() { return modifier; }
            const T& operator()() const { return modifier; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
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
    struct content_tag
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "content_tag";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T content_tag;
            T& operator()() { return content_tag; }
            const T& operator()() const { return content_tag; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
    };
    struct meritid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "meritid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T meritid;
            T& operator()() { return meritid; }
            const T& operator()() const { return meritid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
  } // namespace traits_

  struct traits: sqlpp::table_t<traits,
               traits_::traitid,
               traits_::name,
               traits_::job,
               traits_::level,
               traits_::rank,
               traits_::modifier,
               traits_::value,
               traits_::content_tag,
               traits_::meritid>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "traits";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T traits;
        T& operator()() { return traits; }
        const T& operator()() const { return traits; }
      };
    };
  };
} // namespace xidb
#endif
