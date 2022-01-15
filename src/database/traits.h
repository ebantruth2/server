// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_TRAITS_H
#define XIDB_TRAITS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace Traits_
  {
    struct Traitid
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
    struct Name
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
    struct Job
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
    struct Level
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
    struct Rank
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
    struct Modifier
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
    struct ContentTag
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "content_tag";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T contentTag;
            T& operator()() { return contentTag; }
            const T& operator()() const { return contentTag; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct Meritid
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
  } // namespace Traits_

  struct Traits: sqlpp::table_t<Traits,
               Traits_::Traitid,
               Traits_::Name,
               Traits_::Job,
               Traits_::Level,
               Traits_::Rank,
               Traits_::Modifier,
               Traits_::Value,
               Traits_::ContentTag,
               Traits_::Meritid>
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
