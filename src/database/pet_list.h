// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_PET_LIST_H
#define XIDB_PET_LIST_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace PetList_
  {
    struct Petid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "petid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T petid;
            T& operator()() { return petid; }
            const T& operator()() const { return petid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::require_insert>;
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
    struct Poolid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "poolid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T poolid;
            T& operator()() { return poolid; }
            const T& operator()() const { return poolid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct MinLevel
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "minLevel";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T minLevel;
            T& operator()() { return minLevel; }
            const T& operator()() const { return minLevel; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct MaxLevel
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "maxLevel";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T maxLevel;
            T& operator()() { return maxLevel; }
            const T& operator()() const { return maxLevel; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct Time
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "time";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T time;
            T& operator()() { return time; }
            const T& operator()() const { return time; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct Element
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
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
  } // namespace PetList_

  struct PetList: sqlpp::table_t<PetList,
               PetList_::Petid,
               PetList_::Name,
               PetList_::Poolid,
               PetList_::MinLevel,
               PetList_::MaxLevel,
               PetList_::Time,
               PetList_::Element>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "pet_list";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T petList;
        T& operator()() { return petList; }
        const T& operator()() const { return petList; }
      };
    };
  };
} // namespace xidb
#endif
