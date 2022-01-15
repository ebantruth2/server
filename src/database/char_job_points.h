// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse -identity-naming xidb.sql ../src/database xidb
#ifndef XIDB_CHAR_JOB_POINTS_H
#define XIDB_CHAR_JOB_POINTS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace char_job_points_
  {
    struct charid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "charid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T charid;
            T& operator()() { return charid; }
            const T& operator()() const { return charid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
    };
    struct jobid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "jobid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T jobid;
            T& operator()() { return jobid; }
            const T& operator()() const { return jobid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct capacity_points
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "capacity_points";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T capacity_points;
            T& operator()() { return capacity_points; }
            const T& operator()() const { return capacity_points; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct job_points
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "job_points";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T job_points;
            T& operator()() { return job_points; }
            const T& operator()() const { return job_points; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct job_points_spent
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "job_points_spent";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T job_points_spent;
            T& operator()() { return job_points_spent; }
            const T& operator()() const { return job_points_spent; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct jptype0
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "jptype0";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T jptype0;
            T& operator()() { return jptype0; }
            const T& operator()() const { return jptype0; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct jptype1
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "jptype1";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T jptype1;
            T& operator()() { return jptype1; }
            const T& operator()() const { return jptype1; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct jptype2
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "jptype2";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T jptype2;
            T& operator()() { return jptype2; }
            const T& operator()() const { return jptype2; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct jptype3
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "jptype3";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T jptype3;
            T& operator()() { return jptype3; }
            const T& operator()() const { return jptype3; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct jptype4
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "jptype4";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T jptype4;
            T& operator()() { return jptype4; }
            const T& operator()() const { return jptype4; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct jptype5
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "jptype5";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T jptype5;
            T& operator()() { return jptype5; }
            const T& operator()() const { return jptype5; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct jptype6
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "jptype6";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T jptype6;
            T& operator()() { return jptype6; }
            const T& operator()() const { return jptype6; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct jptype7
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "jptype7";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T jptype7;
            T& operator()() { return jptype7; }
            const T& operator()() const { return jptype7; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct jptype8
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "jptype8";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T jptype8;
            T& operator()() { return jptype8; }
            const T& operator()() const { return jptype8; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct jptype9
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "jptype9";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T jptype9;
            T& operator()() { return jptype9; }
            const T& operator()() const { return jptype9; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
  } // namespace char_job_points_

  struct char_job_points: sqlpp::table_t<char_job_points,
               char_job_points_::charid,
               char_job_points_::jobid,
               char_job_points_::capacity_points,
               char_job_points_::job_points,
               char_job_points_::job_points_spent,
               char_job_points_::jptype0,
               char_job_points_::jptype1,
               char_job_points_::jptype2,
               char_job_points_::jptype3,
               char_job_points_::jptype4,
               char_job_points_::jptype5,
               char_job_points_::jptype6,
               char_job_points_::jptype7,
               char_job_points_::jptype8,
               char_job_points_::jptype9>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "char_job_points";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T char_job_points;
        T& operator()() { return char_job_points; }
        const T& operator()() const { return char_job_points; }
      };
    };
  };
} // namespace xidb
#endif
