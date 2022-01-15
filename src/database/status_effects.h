// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse -identity-naming xidb.sql ../src/database xidb
#ifndef XIDB_STATUS_EFFECTS_H
#define XIDB_STATUS_EFFECTS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace status_effects_
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
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct flags
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "flags";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T flags;
            T& operator()() { return flags; }
            const T& operator()() const { return flags; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct type
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "type";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T type;
            T& operator()() { return type; }
            const T& operator()() const { return type; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct negative_id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "negative_id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T negative_id;
            T& operator()() { return negative_id; }
            const T& operator()() const { return negative_id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct overwrite
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "overwrite";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T overwrite;
            T& operator()() { return overwrite; }
            const T& operator()() const { return overwrite; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct block_id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "block_id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T block_id;
            T& operator()() { return block_id; }
            const T& operator()() const { return block_id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct remove_id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "remove_id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T remove_id;
            T& operator()() { return remove_id; }
            const T& operator()() const { return remove_id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
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
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct min_duration
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "min_duration";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T min_duration;
            T& operator()() { return min_duration; }
            const T& operator()() const { return min_duration; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct sort_key
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "sort_key";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T sort_key;
            T& operator()() { return sort_key; }
            const T& operator()() const { return sort_key; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
  } // namespace status_effects_

  struct status_effects: sqlpp::table_t<status_effects,
               status_effects_::id,
               status_effects_::name,
               status_effects_::flags,
               status_effects_::type,
               status_effects_::negative_id,
               status_effects_::overwrite,
               status_effects_::block_id,
               status_effects_::remove_id,
               status_effects_::element,
               status_effects_::min_duration,
               status_effects_::sort_key>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "status_effects";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T status_effects;
        T& operator()() { return status_effects; }
        const T& operator()() const { return status_effects; }
      };
    };
  };
} // namespace xidb
#endif
