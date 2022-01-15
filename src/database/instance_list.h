// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse -identity-naming xidb.sql ../src/database xidb
#ifndef XIDB_INSTANCE_LIST_H
#define XIDB_INSTANCE_LIST_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace instance_list_
  {
    struct instanceid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "instanceid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T instanceid;
            T& operator()() { return instanceid; }
            const T& operator()() const { return instanceid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct instance_name
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "instance_name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T instance_name;
            T& operator()() { return instance_name; }
            const T& operator()() const { return instance_name; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text>;
    };
    struct instance_zone
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "instance_zone";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T instance_zone;
            T& operator()() { return instance_zone; }
            const T& operator()() const { return instance_zone; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct entrance_zone
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "entrance_zone";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T entrance_zone;
            T& operator()() { return entrance_zone; }
            const T& operator()() const { return entrance_zone; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct time_limit
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "time_limit";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T time_limit;
            T& operator()() { return time_limit; }
            const T& operator()() const { return time_limit; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct start_x
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "start_x";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T start_x;
            T& operator()() { return start_x; }
            const T& operator()() const { return start_x; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct start_y
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "start_y";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T start_y;
            T& operator()() { return start_y; }
            const T& operator()() const { return start_y; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct start_z
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "start_z";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T start_z;
            T& operator()() { return start_z; }
            const T& operator()() const { return start_z; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct start_rot
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "start_rot";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T start_rot;
            T& operator()() { return start_rot; }
            const T& operator()() const { return start_rot; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct music_day
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "music_day";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T music_day;
            T& operator()() { return music_day; }
            const T& operator()() const { return music_day; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct music_night
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "music_night";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T music_night;
            T& operator()() { return music_night; }
            const T& operator()() const { return music_night; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct battlesolo
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "battlesolo";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T battlesolo;
            T& operator()() { return battlesolo; }
            const T& operator()() const { return battlesolo; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct battlemulti
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "battlemulti";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T battlemulti;
            T& operator()() { return battlemulti; }
            const T& operator()() const { return battlemulti; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
  } // namespace instance_list_

  struct instance_list: sqlpp::table_t<instance_list,
               instance_list_::instanceid,
               instance_list_::instance_name,
               instance_list_::instance_zone,
               instance_list_::entrance_zone,
               instance_list_::time_limit,
               instance_list_::start_x,
               instance_list_::start_y,
               instance_list_::start_z,
               instance_list_::start_rot,
               instance_list_::music_day,
               instance_list_::music_night,
               instance_list_::battlesolo,
               instance_list_::battlemulti>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "instance_list";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T instance_list;
        T& operator()() { return instance_list; }
        const T& operator()() const { return instance_list; }
      };
    };
  };
} // namespace xidb
#endif
