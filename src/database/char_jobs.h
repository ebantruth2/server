// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse -identity-naming xidb.sql ../src/database xidb
#ifndef XIDB_CHAR_JOBS_H
#define XIDB_CHAR_JOBS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace char_jobs_
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
    struct unlocked
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "unlocked";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T unlocked;
            T& operator()() { return unlocked; }
            const T& operator()() const { return unlocked; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct genkai
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "genkai";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T genkai;
            T& operator()() { return genkai; }
            const T& operator()() const { return genkai; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct war
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "war";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T war;
            T& operator()() { return war; }
            const T& operator()() const { return war; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct mnk
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mnk";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mnk;
            T& operator()() { return mnk; }
            const T& operator()() const { return mnk; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct whm
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "whm";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T whm;
            T& operator()() { return whm; }
            const T& operator()() const { return whm; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct blm
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "blm";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T blm;
            T& operator()() { return blm; }
            const T& operator()() const { return blm; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct rdm
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "rdm";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T rdm;
            T& operator()() { return rdm; }
            const T& operator()() const { return rdm; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct thf
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "thf";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T thf;
            T& operator()() { return thf; }
            const T& operator()() const { return thf; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct pld
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "pld";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T pld;
            T& operator()() { return pld; }
            const T& operator()() const { return pld; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct drk
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "drk";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T drk;
            T& operator()() { return drk; }
            const T& operator()() const { return drk; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct bst
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "bst";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T bst;
            T& operator()() { return bst; }
            const T& operator()() const { return bst; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct brd
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "brd";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T brd;
            T& operator()() { return brd; }
            const T& operator()() const { return brd; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct rng
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "rng";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T rng;
            T& operator()() { return rng; }
            const T& operator()() const { return rng; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct sam
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "sam";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T sam;
            T& operator()() { return sam; }
            const T& operator()() const { return sam; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct nin
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "nin";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T nin;
            T& operator()() { return nin; }
            const T& operator()() const { return nin; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct drg
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "drg";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T drg;
            T& operator()() { return drg; }
            const T& operator()() const { return drg; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct smn
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "smn";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T smn;
            T& operator()() { return smn; }
            const T& operator()() const { return smn; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct blu
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "blu";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T blu;
            T& operator()() { return blu; }
            const T& operator()() const { return blu; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct cor
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "cor";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T cor;
            T& operator()() { return cor; }
            const T& operator()() const { return cor; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct pup
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "pup";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T pup;
            T& operator()() { return pup; }
            const T& operator()() const { return pup; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct dnc
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "dnc";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T dnc;
            T& operator()() { return dnc; }
            const T& operator()() const { return dnc; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct sch
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "sch";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T sch;
            T& operator()() { return sch; }
            const T& operator()() const { return sch; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct geo
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "geo";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T geo;
            T& operator()() { return geo; }
            const T& operator()() const { return geo; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct run
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "run";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T run;
            T& operator()() { return run; }
            const T& operator()() const { return run; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
  } // namespace char_jobs_

  struct char_jobs: sqlpp::table_t<char_jobs,
               char_jobs_::charid,
               char_jobs_::unlocked,
               char_jobs_::genkai,
               char_jobs_::war,
               char_jobs_::mnk,
               char_jobs_::whm,
               char_jobs_::blm,
               char_jobs_::rdm,
               char_jobs_::thf,
               char_jobs_::pld,
               char_jobs_::drk,
               char_jobs_::bst,
               char_jobs_::brd,
               char_jobs_::rng,
               char_jobs_::sam,
               char_jobs_::nin,
               char_jobs_::drg,
               char_jobs_::smn,
               char_jobs_::blu,
               char_jobs_::cor,
               char_jobs_::pup,
               char_jobs_::dnc,
               char_jobs_::sch,
               char_jobs_::geo,
               char_jobs_::run>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "char_jobs";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T char_jobs;
        T& operator()() { return char_jobs; }
        const T& operator()() const { return char_jobs; }
      };
    };
  };
} // namespace xidb
#endif
